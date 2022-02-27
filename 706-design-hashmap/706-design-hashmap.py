class MyHashMap:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.hash = dict()

    def put(self, key: int, value: int) -> None:
        """
        value will always be non-negative.
        """
        # if key not in self.hash:
        self.hash[key] = value
        

    def get(self, key: int) -> int:
        """
        Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key
        """
        if key in self.hash:
            return self.hash[key]
        else:
            return -1

    def remove(self, key: int) -> None:
        """
        Removes the mapping of the specified value key if this map contains a mapping for the key
        """
        if key in self.hash:
            del self.hash[key]

            '''
# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)
class MyHashMap:
    dict1 = {}
    def put(self, key, val):
        self.dict1[key] = val

    def get(self, key):
        if key in self.dict1 : return self.dict1[key]
        else : return -1

    def remove(self, key):
        if key in self.dict1 : del self.dict1[key]
        else : return -1
        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)
'''