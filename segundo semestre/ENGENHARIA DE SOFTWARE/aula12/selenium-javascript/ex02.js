require("chromedriver");
const {By,Key} = require("selenium-webdriver");
const chrome = require('selenium-webdriver/chrome')
const webdriver = require('selenium-webdriver')

const openBrowserStack = async () => {

    const email = 'bernardoricardoalves330@gmail.com'
    const password = 'senhaEngenharia123'
    
    const options = new chrome.Options()
    options.addArguments('start-maximized')

    const driver = new webdriver.Builder().withCapabilities(options).build()
    await driver.get('https://www.browserstack.com/users/sign_in')

    // const click = await driver.findElement(By.className('sign-in-link')).click()
    await driver.findElement(By.id('user_email_login')).sendKeys(email)
    await driver.findElement(By.id('user_password')).sendKeys(password)
    await driver.findElement(By.id('user_submit')).click()
}

openBrowserStack()