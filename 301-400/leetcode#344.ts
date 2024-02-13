function reverseString(s: string[]): void {
    let l: number = 0;
    let r: number = s.length - 1;

    while (l < r) {
        const t = s[l];
        s[l] = s[r];
        s[r] = t;
        l++;
        r--;
    }
};
