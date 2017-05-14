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

key_type            // 关键字类型
mapped_type         // 每个关键字关联的类型，只适用于map
value_type          // 对于set，与key_type相同，对于map，为pair<const key_value, mapped_type>

// 一个 map 的 value_type 是一个 pair 我们可以改变 pair 的值， 但是不能改变关键字成员的值
// set 的关键字也是 const , 可以用迭代器读取但是不能修改

vector<int> ivec = {2,4,6,8,2,4,6,8};               // ivec 8
set<int> set2;                                      // set2 0
set2.insert(ivec.cbegin(), ivec.cend());            // set2 4
set2.insert({1,3,5,7,1,3,5,7});                     // set2 8

map<string, size_t> word_count;
string word;
word_count.insert({word, 1});
word_count.insert(make_pair(word, 1));
word_count.insert(pair<string, size_t>(word, 1));
word_count.insert(map<string, size_t>::value_type(word, 1));

map<string, size_t>::value_type(s, 1);

// insert or emplace 返回的值依赖于容器类型和参数
// 对于不包含重复关键字的容器，添加单一元素的 insert 和 emplace 版本返回一个 pair 告诉我们插入操作是否成功
// pair 的 first 成员是一个迭代器，指向具有给定关键字的元素
// pair 的 second 成员是一个 bool 值，指出元素是插入成功(true)还是已经存在于容器(false)中。

// For example
map<string, size_t> word_count;
string word;
while (cin >> word) {
    auto ret = word_count.insert({word, 1});
    if (!ret.second)
        ++ret.first->second;        // 递增计数器
}

++((ret.first)->second);
// ret 保存 insert 返回的值，是一个 pair
// ret.first 是 pair 的第一个成员，是一个 map 迭代器，指向具有给定关键字的元素
// ret.first-> 解引用此迭代器，提取 map 中的元素， 元素也是一个 pair
// ret.first->second map 中元素的值部分
// ++ret.first->second 递增此值
