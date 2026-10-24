func isAnagram(s string, t string) bool {
	freq := make([]int, 26)
	for i := range s {
		freq[s[i] - 'a']++
	}
	for i := range t {
		freq[t[i] - 'a']--
	}
	for i := range freq {
		if freq[i] != 0 {
			return false
		}
	}
	return true
}
