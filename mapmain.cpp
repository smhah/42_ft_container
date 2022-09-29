/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapmain.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:45:00 by smhah             #+#    #+#             */
/*   Updated: 2022/09/09 16:55:55 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Map.hpp"
# include <map>
# include <iostream>

// Driver Code
int main()
{
	ft::map<int, int> mymap;
	std::map<int, int> o_map;
	// mymap[6] = 100;
	// mymap[3] = 200;
	// mymap[9] = 200;
	// mymap[5] = 200;
	// mymap[8] = 200;
	// std::map<int, int>::iterator it2 = mymap.end();
	
	// //it2 = mymap.begin();
	// std::cout << "it2 is " << it2->first << std::endl;
	// it2--;
	// std::cout << "it2 is " << it2->first << std::endl;
	// ft::map<int, int> m;
	ft::pair<int, int> planet1;
	std::pair<int,int> planetx;
	ft::pair<int, int> planet3;
	ft::pair<int, int> planet4;
	ft::pair<int, int> planet5;
	ft::pair<int, int> planet6;
	ft::pair<int, int> planet7;
	ft::pair<int, int> planet8;
	ft::pair<int, int> planet9;
	ft::pair<int, int> planet10;
	ft::pair<int, int> planet11;
	ft::pair<int, int> planet12;

	
	// //it = m.begin();
	// //std::cout << "it 1 is " << it->first << std::endl;
	// //std::cout << "*it = " << *it << std::endl;

	planet1 = ft::make_pair(1, 1);
	planet3 = ft::make_pair(3, 2);
	planet4 = ft::make_pair(4, 2);
	planet5 = ft::make_pair(5, 3);
	planet6 = ft::make_pair(6, 4);
	planet7 = ft::make_pair(7, 4);
	planet9 = ft::make_pair(9, 5);
	planet8 = ft::make_pair(8, 6);
	planet10 = ft::make_pair(10, 6);
	planet11 = ft::make_pair(11, 6);
	planet12 = ft::make_pair(12, 6);
	//std::cout << "first int is "<< planet1.first << "second int is " << planet1.second << std::endl;
	//std::pair<std::map<char,int>::iterator,bool> ret;

	mymap.insert(planet7);
	mymap.insert(planet9);
	mymap.insert(planet8);
	mymap.insert(planet3);
	mymap.insert(planet1);
	mymap.insert(planet10);
	mymap.insert(planet11);
	mymap.insert(planet12);
	mymap.insert(planet6);
	mymap.insert(planet5);
	mymap.erase(3);
	//mymap.insert(planet1);
	//mymap.erase(6);
	//mymap.printTree(mymap.get_root(), nullptr, false);	
	// // root = m.insert(root, planet7, root);
	// // root = m.insert(root, planet3, root);
	// // root = m.insert(root, planet9, root);
	// // root = m.insert(root, planet5, root);
	// // root = m.insert(root, planet8, root);
	// m.insert(planet6);
	// m.insert(planet3);
	// m.insert(planet9);
	// m.insert(planet5);
	// m.insert(planet8);
	// //m.erase(planet9.first);
	// //m.erase(9);
	// ft::map<int, int>::const_iterator it;
	// ft::map<int, int>::iterator it1;
	// // ft::map<int, int>::reverse_iterator rit;

	// // rit = m.rbegin();
	// // std::cout << "rbegin is " << rit->first << std::endl;
	// it = m.begin();
	// std::cout << "test const iterator " << it->first << std::endl;
	// // std::cout << "o_lower_bound " << mymap.lower_bound(10)->first << std::endl;
	// // std::cout << mymap.end()->first << std::endl;
	// // std::cout << "lower_bound " << m.lower_bound(10)->first << std::endl;
	// //it = m.find(0);
	// // /* The constructed AVL Tree would be
	// // 			30
	// // 		/ \
	// // 		20 40
	// // 		/ \ \
	// // 	10 25 50
	// // */
	// // std::cout << "Preorder traversal of the "
	// // 		"constructed AVL tree is \n";
	// //m.preOrder(root);
	// m.printTree(m.get_root(), nullptr, false);
	return 0;
}

// This code is contributed by
// rathbhupendra