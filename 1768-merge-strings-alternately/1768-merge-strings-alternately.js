/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    let res = []
    for(let i = 0; i < Math.min(word1.length, word2.length) ; i++){
        res.push(word1[i])
        res.push(word2[i])
    }
    if (word1.length == word2.length) return res.join("");
    if(word1.length > word2.length) {
        res.push(...word1.slice(word2.length));
    } else {
        res.push(...word2.slice(word1.length));
    }
    return res.join("");
};

var cleanup = (word) => {
    return word.replaceAll(" ", "")
}