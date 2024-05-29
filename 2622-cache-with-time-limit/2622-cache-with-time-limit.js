var TimeLimitedCache = function() {
    this.store = new Map();
};
TimeLimitedCache.prototype.set = function(key, value, duration) {
    let exists = this.store.has(key);
    if(exists) clearTimeout(this.store.get(key).timer)
    this.store.set(key, {
        value,
        timer: setTimeout(()=> this.store.delete(key), duration)
    })
    return exists;
};

TimeLimitedCache.prototype.get = function(key) {
    return this.store.has(key) ? this.store.get(key).value : -1;
};

TimeLimitedCache.prototype.count = function() {
    return this.store.size;
};
