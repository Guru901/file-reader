#include <stdio.h>

void get_all_posts();
void get_post_by_id(int id);
void edit_post(int id, Post post);
void delete_post_by_id(int id);


// This has to be implemented after taking a look in the db.json file.
typedef struct {
    // fields
} Post;

int main() {
    printf("Hello, World!\n");
    return 0;
}

// This function should accept all the data needed for post **except** id.
// And it should return 0 if the post is created and 1 if not.
void create_post(Post post) {

}


// This function should return all the posts from the file `db.json`.
// So the return type should be changed and the function has to be implemented
void get_all_posts() {

}

// This function should return all a post by id from the file `db.json`.
// So the return type should be changed and the function has to be implemented
void get_post_by_id(int id) {

}

// This function accepts an id of the post to edit and the data to edit.
// It should return 0 if the post is successfully edited and 1 if something failed.
void edit_post(int id, Post post) {

}

// This function accepts an id of the post to delete from the file.
// It should return 0 if the post is successfully deleted and 1 if something failed.
// U cant use the edit_post function here with empty post data because it wont remove the post,
// it would just edit it so that it's empty.
void delete_post_by_id(int id) {

}
