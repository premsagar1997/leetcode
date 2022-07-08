class RandomizedSet {
    constructor() {
        this.myMap = new Map();
        this.list = [];
    }
    
    /** 
     * @param {number} val
     * @return {boolean}
     */
    insert(val) {
        if (this.myMap.has(val))
            return false;
        this.myMap.set(val, this.list.length);
        this.list.push(val);
        return true;
    }
    
    /** 
     * @param {number} val
     * @return {boolean}
     */
    remove(val) {
        if (!this.myMap.has(val))
            return false;
        const index = this.myMap.get(val);
        this.swapVal(index, this.list.length - 1);
        this.list.pop();
        this.myMap.set(this.list[index], index);
        this.myMap.delete(val);
        return true;
    }
    
    /**
     * @return {number}
     */
    getRandom() {
        return this.list[Math.floor(Math.random()*this.list.length)];
    }
    
    swapVal(i, j) {
        const tempVal = this.list[i];
        this.list[i] = this.list[j];
        this.list[j] = tempVal;
    }
}
