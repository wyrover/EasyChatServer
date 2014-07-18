/*
** datas.h for datas in /home/alexmog/testwebsocket/c_version
** 
** Made by Moghrabi Alexandre
** Login   <alexmog@epitech.net>
** 
** Started on  Thu May  8 16:55:25 2014 Moghrabi Alexandre
** Last update Fri Jul 18 16:57:55 2014 Moghrabi Alexandre
*/

#ifndef DATAS_H_
# define DATAS_H_

# include <pthread.h>
# include "users.h"
# include "list.h"

typedef struct
{
  t_list		*users;
  t_list		*banned;
  t_list		*admins;
  t_list		*opers;
  pthread_mutex_t	mutex;
  int			version;
  char			logfile[80];
  char			port[80];
  char			auth_use;
  char			auth_link[512];
  char			admin_file[81];
  char			ban_file[81];
  char			op_file[81];
} t_datas;

#endif /* !DATAS_H_ */
