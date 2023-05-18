/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:41:17 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/18 22:20:50 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "search_replace.hpp"

std::string	replace_content(std::string line, std::string search, std::string replace)
{
	std::string	final1;
	size_t	found, start = 0, s_len = search.length(), save = 0;

	found = line.find(search);
	while (found != std::string::npos)
	{
		save = found;
		final1 += line.substr(start, found - start);
		start = found + s_len;
		final1 += replace;
		found = line.find(search, start);
	}
	if (save)
		final1 += line.substr(save + s_len, line.length() - save - s_len);
	else
		final1 += line.substr(start, line.length() - save);
	return (final1);
}
