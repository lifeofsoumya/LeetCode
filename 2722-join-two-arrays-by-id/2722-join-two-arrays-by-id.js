/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
    const items = [...arr1, ...arr2];
    let res = {}
    for(let item of items){
        if(!res[item.id]){
            res[item.id] = item;
            continue;
        }
        res[item.id] = {...res[item.id], ...item};
    }
    return Object.values(res);
    
};