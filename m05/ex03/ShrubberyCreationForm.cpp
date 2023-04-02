/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:51:35 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 16:41:51 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name):Form(name, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & ob):_target(ob._target)
{	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&)
{
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	check(executor);
	std::ofstream target ((getName() + "_shrubbery").c_str(), std::ostream::out);
	target << "              _{\\ _{\\{\\/}/}/}__ " << std::endl;
	target << "             {/{/\\}{/{/\\}(\\}{/\\} _ " << std::endl;
	target << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _ " << std::endl;
	target << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\} " << std::endl;
	target << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/} " << std::endl;
	target << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/} " << std::endl;
	target << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\} " << std::endl;
	target << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\} " << std::endl;
	target << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\} " << std::endl;
	target << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/} " << std::endl;
	target << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_) " << std::endl;
	target << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/} " << std::endl;
	target << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\} " << std::endl;
	target << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\} " << std::endl;
	target << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_) " << std::endl;
	target << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/} " << std::endl;
	target << "             {/{\\{\\{\\/}/}{\\{\\}/} " << std::endl;
	target << "              {){/ {\\/}{\\/} \\}\\} " << std::endl;
	target << "               (_) \\.-'.-/ " << std::endl;
	target << "          __...--- |'-.-'| --...__ " << std::endl;
	target << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__ " << std::endl;
	target << " -\"    ' .  . '    |.'-._| '  . .  '   jro " << std::endl;
	target << " .  '-  '    .--'  | '-.'|    .  '  . ' " << std::endl;
	target << "          ' ..     |'-_.-| " << std::endl;
	target << "  .  '  .       _.-|-._ -|-._  .  '  . " << std::endl;
	target << "              .'   |'- .-|   '. " << std::endl;
	target << "  ..-'    '   '.   `-._.-'   .'  '  - . " << std::endl;
	target << "   .-' '        '-._______.-'     '  . " << std::endl;
	target << "        .       ~, " << std::endl;
	target << "    .       .   |\\   .    ' '-. " << std::endl;
	target << "    ___________/  \\____________ " << std::endl;
	target << "   /  Why is it, when you want \\ " << std::endl;
	target << "  |  something, it is so damn   | " << std::endl;
	target << "  |    much work to get it?     | " << std::endl;
	target << "   \\___________________________/ " << std::endl;
	target.close();
}