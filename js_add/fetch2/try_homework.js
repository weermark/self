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
        let row = [topic, sub_topic, date, board, d_v, d_a, valence, title]
        rows.push(row);
    }
    //console.log(rows)
    let topic_name = []
    let name = []
    var num = 0
    topic_name.push(rows[0][0])
    for (let i = 0; i < rows.length; i++) {
        for (let j = 0; j < topic_name.length; j++) { //topic
            if (topic_name[j] == rows[i][0]) { //topic沒重複則加入topic_name
                num++;
            }
        }
        if (num == 0) {
            topic_name.push(rows[i][0])
        }
        num = 0;
    }
    //console.log(topic_name)
    let len = [];
    let time = 0;
    let num2 = 0;
    let tags = [];
    let sub_array = []
    for (let i = 0; i < topic_name.length; i++) {
        let sub_topic_name = []
        for (let j = 0; j < rows.length; j++) {
            if (topic_name[i] == rows[j][0]) { //檢查內容
                if (time == 0) {
                    sub_topic_name.push(rows[j][1]) //
                }
                time++;
                for (let k = 0; k < sub_topic_name.length; k++) {
                    if (sub_topic_name[k] == rows[j][1]) { //
                        num2++;
                    }
                }
                if (num2 == 0) {
                    sub_topic_name.push(rows[j][1]) //
                }
            }
            num2 = 0;
        }
        //console.log(sub_topic_name)

        sub_array.push(sub_topic_name)
        len.push(time)
        //tags.push(["topic:"+topic_name[i], "length:"+time, "sub_topics:"+sub_topic_name])
        time = 0;
    }

    let time2 = []
    let time2_1 = []
    for (var i = 0; i < sub_array.length; i++) {
        for (var j = 0; j < sub_array[i].length; j++) {
            time2_1.push(0)
        }
        time2.push(time2_1)
        time2_1 = []
    }

    for (var i = 0; i < sub_array.length; i++) {
        for (var j = 0; j < sub_array[i].length; j++) {
            for (var k = 0; k < rows.length; k++) {
                if (topic_name[i] == rows[k][0]) {
                    if (sub_array[i][j] == rows[k][1]) { //split(":")
                        time2[i][j]++
                    }
                }
            }
            //sub_array[i].push(time2[i][j])
        }
        //console.log('5')
        //tags.push(["topic:"+topic_name[i], "length:"+time, "sub_topics:"+sub_array[i]])
    }
    //console.log(tags)
    let com_sub = []
    //let s_sub = []
    for (var i = 0; i < sub_array.length; i++) {
        com_sub.push([]) //[14]
        for (var j = 0; j < sub_array[i].length; j++) {
            com_sub[i].push([])
        }
    }

    for (var i = 0; i < sub_array.length; i++) {
        for (var j = 0; j < sub_array[i].length; j++) {
            let a = sub_array[i][j]
            let b = time2[i][j]
            com_sub[i][j].push({
                "name": a
            })
            com_sub[i][j].push({
                "length": b
            })
            //console.log(s_sub)
        }
        //com_sub[i].push(s_sub)
        //s_sub = []
    }
    //console.log(com_sub[0])

    // for (var i = 0; i < sub_array.length; i++) {
    //     for (var j = 0; j < sub_array[i].length; j++) {
    //          let a = sub_array[i][j]
    //          let b = time2[i][j]
    //          s_sub.push(a, b)
    //         //console.log(s_sub)
    //     }
    //     com_sub[i].push(s_sub)
    //     s_sub = []
    // }

    //console.log(com_sub)

    //console.log(sub_array)

    //console.log(com_sub)

    let all = []
    let all_news_length = rows.length
    //1
    for (var i = 0; i < sub_array.length; i++) {

        tags.push({
            "topic": topic_name[i],
            "length": len[i],
            "sub_topics": com_sub[i]
        })
    }
    all = {
        "total": all_news_length,
        "tages": tags
    }


    // for (let i = 0; i < ori_data.length; i++) {
        
    //     valence = ori_data[i]["valence"]
        
    //     va.push(valence);
    // }

    let valence_name = []
    var num3 = 0
    valence_name.push(rows[0][6])
    for (let i = 0; i < rows.length; i++) {
        for (let j = 0; j < valence_name.length; j++) { //topic
            if (valence_name[j] == rows[i][6]) { //topic沒重複則加入topic_name
                num3++;
            }
        }
        if (num3 == 0) {
            valence_name.push(rows[i][6])
        }
        num3 = 0;
    }

     console.log(valence_name)

    // var val = '<span>' +"全部" +"</span><span>"+
    //             valence.join("</span><span>") +
    //             "</span>";
    //console.log(com_sub[0][0])
    // let bb=[]
    // let cc =[]
    // cc.push(com_sub[0])
    // bb.push(cc)
    // console.log(bb)
    //OR

    //2
    // console.log("tags:\n")
    // for (var i = 0; i < sub_array.length; i++) {
    //     console.log("topic:" + topic_name[i], "length:" + len[i], "sub_topics:" + com_sub[i])
    // }


}

// let com_sub = []
//             let s_sub = {}
//             for (var i = 0; i < sub_array.length; i++) {
//                 com_sub.push([]) //[14]
//                 // for (var j = 0; j < sub_array[i].length; j++) {
//                 //     com_sub[i].push([])
//                 // }
//             }

//             for (var i = 0; i < sub_array.length; i++) {
//                 for (var j = 0; j < sub_array[i].length; j++) {
//                     let a = sub_array[i][j]
//                     let b = time2[i][j]
//                     s_sub+={
//                         "name": a,
//                         "length": b
//                     }
//                 }
//                 com_sub[i].push(s_sub)
//                 //com_sub[i].push(s_sub)
//                 s_sub = {}