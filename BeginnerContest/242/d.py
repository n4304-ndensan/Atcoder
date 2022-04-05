from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from time import sleep

options = Options()
# options.add_argument('--headless')
keyword = 'a'
browser = webdriver.Chrome(executable_path='/Users/shinodashogo/Documents/Python'
                                                            '/chromedriver/chromedriver')
rakuten_url = 'https://www.rakuten.co.jp/'
browser.get(rakuten_url)
sleep(10)
elem_search = browser.find_element_by_xpath('//*[@id="common-header-search-input"]')
elem_search.send_keys(keyword)
elem_click = browser.find_element_by_xpath('//*[@id="wrapper"]/div[5]/div/div/div/div['
                                           '1]/div/div/div/a/div/div/div')
elem_click.click()
sleep(5)

rakuten_products = [[], [], []]
elems_product_price = browser.find_elements_by_class_name('important')
elem_product_names = browser.find_elements_by_css_selector('div.content div.title h2')
elem_product_urls = browser.find_elements_by_css_selector('div.content div.title a')
for i in range(10):
    num = i + 1
    rakuten_products[0].append(elem_product_names[i].text)
    rakuten_products[1].append(elems_product_price[i].text)
    rakuten_products[2].append(elem_product_urls[i].get_attribute('href'))

a = [i for i in range(10)]

for i in range(10):
    print(rakuten_products[0][i])
    print(rakuten_products[1][i])
    print(rakuten_products[2][i])
