/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let ss = s.trim();
    let str = ss.split(" ");
    let newStr = "";
    for (let i = str.length - 1; i >= 0; i--)
        if (str[i])
            newStr = newStr +" "+str[i];
    return newStr.trim();
};
