function solution(N, number) {
    let answer = 0;

    const set = new Array(8).fill().map(()=>new Set());
    for(let i = 0 ; i < 8 ; i ++){
        const value = Number(N.toString().repeat(i+1));
        set[i].add(value);  
        for(let j = 0 ; j < i ; j++){
            
            for(const arg1 of [...set[j]]){
                for(const arg2 of [...set[i-j-1]] ){
                    set[i].add(arg1 + arg2);
                    set[i].add(arg1 - arg2);
                    set[i].add(arg1 * arg2);
                    set[i].add(arg1 / arg2);
                }
            }
        }
         if(set[i].has(number)) return i+1;
        
    }
   
    return -1;
}