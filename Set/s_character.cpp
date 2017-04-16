1.对于关联容器（map，set）来说，插入删除不需要做内存拷贝和内存移动。Set容器内所有元素都是以节点的方式来存储的
2.每次insert后，以前保存的iterator不会失效，因为iterator相当于指向节点的指针，内存没变，指向内存的指针不会失效。但是记住一个原则：不要使用过期的iterator
3.在Set中查找是使用二分查找，也就是说元素越多，最多比较次数增加的越慢

常用方法：
begin();
end();
clear();
empty();
max_size();
size();
rbegin();
rend();

count();    // 用来查找Set中某个某个键值出现的次数，因为键值只可能为0或1，所以此函数变成了判断某一键值是否在set出现过
equal_range();

erase(iterator);
erase(first, second);
erase(key_value);

find();

insert(key_value);
inset(first, second);

lower_bound(key_value);     // 返回第一个大于等于key_value的定位器
upper_bound(key_value);     // 返回最后一个大于等于key_value的定位器