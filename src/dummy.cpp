#include <map>
#include <limits>

template<typename K, typename V>
class dummy{
	std::map<K,V> m_map;

public:
    dummy( V const& val) {
        m_map.insert(m_map.end(),std::make_pair(std::numeric_limits<K>::lowest(),val));
    }

    const std::map<K,V>& getMap() const { return m_map;};
    std::map<K,V> & getMap() { return m_map;};


};
