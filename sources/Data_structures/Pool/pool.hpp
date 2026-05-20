/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pool.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 00:09:56 by chhoflac          #+#    #+#             */
/*   Updated: 2026/05/21 00:40:25 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>

template<typename TType>
class Pool{
    private:
        std::vector<TType *> storage;
        std::vector<TType *> available;

    public:
        class Object{
            private:
                TType       *_ptr;
                Pool<TType> *_pool;
            public:
                TType* operator->();
        };
        
        void    resize(const size_t &numberOfObjectStored);
        template<typename... TArgs> Object acquire(TArgs&&... p_args);
        
       
};

