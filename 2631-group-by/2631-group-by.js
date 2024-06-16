/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    let res = {
        
    }
    for(i = 0; i < this.length; i++){
        let key = fn(this[i]);
        if(!res[key]){
            res[key] = []
        } 
        res[key].push(this[i])
    }
    
    return res;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */