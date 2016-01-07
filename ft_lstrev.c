#include "libft.h"

t_list	*ft_lstrev(t_list *lst)
{
	t_list *out;

	out = NULL;
	while (lst)
	{
		ft_lstadd(&out, ft_lstnew(lst->content, lst->content_size));
		lst = lst->next;
	}
	return (out);
}
