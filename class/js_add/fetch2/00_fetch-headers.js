const fetch = require("node-fetch");
const url = "https://www.yzu.edu.tw/";

var UserAgentList = [
  'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/89.0.4389.114 Safari/537.36',
  'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:87.0) Gecko/20100101 Firefox/87.0',
  'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.85 Safari/537.36 Edg/90.0.818.46']
 
var Options = {
    method: 'GET',
    headers: {'User-Agent': UserAgentList[Math.floor(Math.random() * UserAgentList.length)]}
}     
  
// console.log(Options);
  
fetch(url, Options)
  .then(res => {
    console.log(res);
    console.log(res.ok);
    console.log(res.status);
    console.log(res.statusText);
    console.log(res.headers.raw());
    console.log(res.headers.get("content-type"));
  });

const getData = async (url, Options) => {
  try {
    const response = await fetch(url, Options);
    const headJson = await response.headers.raw();
    var body = await response.text()
    //console.log(json["set-cookie"]);
    console.log(headJson["content-type"]);
    console.log(body.substring(0,630))
  } catch (error) {
    console.log(error);
  }
};

getData(url, Options);
