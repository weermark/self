const requestURL = 'http://140.138.154.197:8787/CP113/B/HW4';
const columns = [
    'topic',
    'sub_topic',
    'date',
    'board',
    'd_v',
    'd_a',
    'valence',
    'title',
];

let ori_data = '';

//--------------------------------
// ---------本次作業作答區---------
//--------------------------------
const fetch = require("node-fetch");
//const HTMLParser = require("node-html-parser");

fetch(requestURL)
    .then(response => response.json())
    .then(json => {
        parseJSON2Table(json);

    })

function parseJSON2Table(jsonObj) {
    let rows = [];
    let topic_name = []
    ori_data = jsonObj.data
    for (let i = 0; i < ori_data.length; i++) {
        topic = ori_data[i]['topic']
        sub_topic = ori_data[i]['sub_topic']
        date = ori_data[i]['date']
        board = ori_data[i]['board']
        d_v = ori_data[i]["d_v"]
        d_a = ori_data[i]["d_a"]
        valence = ori_data[i]["valence"]
        title = ori_data[i]["title"]
        let row = [topic, sub_topic, board, d_v, d_a, valence, title]
        rows.push(row);
    }

    var num = 0
    topic_name.push(rows[0][0])
    for (let i = 0; i < rows.length; i++) {
        for (let j = 0; j < topic_name.length; j++) {
            if (topic_name[j] == rows[i][0]) {
                num++;
            }
        }
        if (num == 0) {
            topic_name.push(rows[i][0])
            //console.log('5')
        }
        num = 0;
    }
    console.log(topic_name)
}