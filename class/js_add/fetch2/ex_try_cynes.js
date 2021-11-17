const fetch = require('node-fetch')
const HTMLParser = require('node-html-parser')

const url = "https://news.cnyes.com/news/cat/headline?exp=a";

fetch(url) // may use string templating fetch(`${url}`)
    .then(res => res.text())
    .then(body => HTMLParser.parse(body))
    .then(domRoot => extractData(domRoot))

function extractData(root) {
    let nodes = root.querySelectorAll('div._2bFl div a')
    let elem, kind, time, title, aurl, temp;
    let description = '';
    for (i = 0; i < nodes.length; i++) {
        elem = nodes[i]
        kind = elem.querySelector(".theme-sub-cat").rawText.trim()
        temp = elem.querySelector("time").getAttribute('datetime')
        time = temp.replace("T", ' ').substring(0,19);
        title = elem.getAttribute('title')
        aurl = "https://news.cnyes.com" + elem.getAttribute('href')
        //
        description += "{\n"
        description += kind + "\n" + time + "\n" + title + "\n" + aurl + '\n'
        description += "}" + "\n\n"
    }

    console.log(description)

    
    //console.log(nodes.length)
    
    
    // if (description == '') {
    //     console.log("there are not thing")
    // }
}