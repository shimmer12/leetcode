class Solution(object):
    def isAnagram(self, s, t):
        return collections.Counter(s)==collections.Counter(t)
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
