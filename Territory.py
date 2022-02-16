import random
import time
from typing import List

import numpy as np


class Human(object):

    def __init__(self, position_of_human, position_of_animal, territory):
        self.position_of_human = position_of_human
        self.position_of_animal = position_of_animal
        self.territory = territory

    def placement(self):
        territory = self.territory
        position_of_human= self.position_of_human
        position_of_animal = self.position_of_animal
        number_of_human = int(len(self.position_of_human))
        number_of_animal = int(len(self.position_of_animal))
        for i in range(number_of_human - 1):
            x = position_of_human[i][1]
            y = position_of_human[i][2]
            territory[x, y] = 1
        for i in range(number_of_animal - 1):
            x = position_of_animal[i][0]
            y = position_of_animal[i][1]
            territory[x, y] = 2
        return territory

    def action(self):
        select_actions = self.create_select_actions()
        position_of_human = self.position_of_human
        for i, select_action in enumerate(select_actions):
            human_x = position_of_human[i][1]
            human_y = position_of_human[i][2]
            if select_action == '.':
                pass
            elif select_action == 'u':
                territory[human_x-1, human_y] = 10
            elif select_action == 'd':
                territory[human_x+1, human_y] = 10
            elif select_action == 'l':
                territory[human_x, human_y-1] = 10
            elif select_action == 'a':
                territory[human_x, human_y+1] = 10
            elif select_action == 'U':
                territory[human_x, human_y] = 0
                territory[human_x-1, human_y] = 1
                position_of_human[i][1] = human_x-1
            elif select_action == 'D':
                territory[human_x, human_y] = 0
                territory[human_x+1, human_y] = 1
                position_of_human[i][1] = human_x+1
            elif select_action == 'L':
                territory[human_x, human_y] = 0
                territory[human_x, human_y-1] = 1
                position_of_human[i][2] = human_y-1
            elif select_action == 'A':
                territory[human_x, human_y] = 0
                territory[human_x, human_y+1] = 1
                position_of_human[i][2] = human_y+1
            else:
                pass
        return territory

    def create_select_actions(self):
        territory = self.territory
        number_of_human = int(len(self.position_of_human))
        position_of_human = self.position_of_human
        action_list = ['.', 'u', 'd', 'l', 'a', 'U', 'D', 'L', 'A']
        close_action = ['u', 'd', 'l', 'a']
        close_action2 = [['u', 'a'], ['a', 'd'], ['d', 'l'], ['l', 'u']]
        move_action = ['U', 'D', 'L', 'A']
        select_actions = []
        for i in range(number_of_human-1):
            human_x = position_of_human[i][1]
            human_y = position_of_human[i][2]
            try:
                human_u = territory[human_x-1, human_y]
            except:
                human_u = None
            try:
                human_d = territory[human_x+1, human_y]
            except:
                human_d = None
            try:
                human_l = territory[human_x, human_y-1]
            except:
                human_l = None
            try:
                human_a = territory[human_x, human_y+1]
            except:
                human_a = None
            human_arounds = [human_u, human_d, human_l, human_a]
            try:
                human_top = territory[human_x, human_y+2]
            except:
                human_top = None
            try:
                human_bottom = territory[human_x, human_y-2]
            except:
                human_bottom = None
            try:
                human_right = territory[human_x+2, human_y]
            except:
                human_right = None
            try:
                human_left = territory[human_x-2, human_y]
            except:
                human_left = None
            try:
                human_t_l = territory[human_x-1, human_y+1]
            except:
                human_t_l = None
            try:
                human_t_r = territory[human_x+1, human_y+1]
            except:
                human_t_r = None
            try:
                human_b_l = territory[human_x-1, human_y-1]
            except:
                human_b_l = None
            try:
                human_b_r = territory[human_x+1, human_y-1]
            except:
                human_b_r = None
            human_arounds2 = [human_left, human_right, human_bottom, human_top]
            human_arounds3 = [human_t_l, human_t_r, human_b_l, human_b_r]
            for n, human_around2 in enumerate(human_arounds2):
                if human_around2 == 2:
                    action_list.remove(close_action[n])
            for n, human_around3 in enumerate(human_arounds3):
                if human_around3 == 2:
                    try:
                        action_list.remove(close_action2[n][0])
                        action_list.remove(close_action2[n][1])
                    except:
                        pass
            for n, human_around in enumerate(human_arounds):
                if human_around in [1, 2] or human_around == None:
                    try:
                        action_list.remove(close_action[n])
                    except:
                        pass
            for n, human_around in enumerate(human_arounds):
                if human_around in [10] or human_around == None:
                    try:
                        action_list.remove(move_action[n])
                    except:
                        pass
            select_action = random.choice(action_list)
            select_actions.append(select_action)
            action_list = ['.', 'u', 'd', 'l', 'a', 'U', 'D', 'L', 'A']
        return select_actions

    def human_action(self):
        territory = self.territory
        return territory

class RandomGenerate(object):

    def human_generation(self):
        number_of_people = random.randint(5, 11)
        return number_of_people

    def position_of_human(self):
        position_of_human = []
        number_of_people = self.human_generation()
        print(number_of_people)
        for i in range(number_of_people):
            if 0 == i:
                x = random.randint(0, 29)
                y = random.randint(0, 29)
                position_of_human.append([i, x, y])
            else:
                while True:
                    x = random.randint(0, 29)
                    y = random.randint(0, 29)
                    boolean = True
                    for n in range(i-1):
                        if [x, y] == [position_of_human[n][1], position_of_human[n][2]]:
                            boolean = False
                    if boolean:
                        position_of_human.append([i, x, y])
                        break
        return position_of_human

    def animal_generation(self):
        number_of_animal = random.randint(10, 21)
        return number_of_animal

    def position_of_animal(self, position_of_human):
        position_of_animal = []
        number_of_animal = self.animal_generation()
        print(number_of_animal)
        for i in range(number_of_animal):
            if 0 == i:
                x = random.randint(0, 29)
                y = random.randint(0, 29)
                position_of_animal.append([i, x, y])
            else:
                while True:
                    x = random.randint(0, 29)
                    y = random.randint(0, 29)
                    boolean = True
                    for n in range(i-1):
                        if [x, y] == [position_of_animal[n][1], position_of_animal[n][2]]:
                            boolean = False
                    for nn in range(len(position_of_human)):
                        if [x, y] == [position_of_human[nn][1], position_of_human[nn][2]]:
                            boolean = False
                    if boolean:
                        animal_types = [1, 2, 3, 4, 5]
                        animal_type = random.choice(animal_types)
                        position_of_animal.append([x, y, animal_type])
                        break
        return position_of_animal

start = time.time()
random_generate = RandomGenerate()
position_of_human = random_generate.position_of_human()
position_of_animal = random_generate.position_of_animal(position_of_human)
print(position_of_human)
print(position_of_animal)
territory = np.zeros((30, 30), dtype=np.int16)
animal = Human(position_of_human, position_of_animal, territory)
place = animal.placement()
print(place)
for i in range(300):
    animal.action()
print(territory)
print(position_of_human)
print(position_of_animal)
elapsed_time = time.time() - start
print ("elapsed_time:{0}".format(elapsed_time) + "[sec]")



