/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    const results = new Array(functions.length)
    let count = 0;
    return new Promise((resolve, reject)=> {
        functions.forEach((func, index) => {
            func()
            .then(res => { // instead of results.push(res), push res in proper order
                results[index] = res;
                count++;
                if(count === functions.length) resolve(results)
            })
            .catch(err => reject(err))
        })
    })
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */