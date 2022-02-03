`
TypeError: unhashable type: 'list'
res = set()
res.add([a,b,c])
throws error
​
resolve by chaniging:
res.add((a,b,c))
`