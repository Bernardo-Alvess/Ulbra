require("chromedriver");
const {By,Key} = require("selenium-webdriver");
const chrome = require('selenium-webdriver/chrome')
const webdriver = require('selenium-webdriver')


async function pesquisarULBRA(){
        
    var searchString = "Computação ULBRA Torres";

    const options = new chrome.Options()
    options.addArguments('start-maximized')
    
    const driver = await new webdriver.Builder().withCapabilities(options).build()

    await driver.get("http://google.com");
        
    await driver.findElement(By.name("q")).sendKeys(searchString,Key.RETURN);

    await driver.quit();
 
}

pesquisarULBRA()
 