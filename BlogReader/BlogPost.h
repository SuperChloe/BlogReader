//
//  BlogPost.h
//  BlogReader
//
//  Created by Chloe on 2015-12-10.
//  Copyright © 2015 Chloe Horgan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *author;
@property (strong, nonatomic) NSString *thumbnail;
@property (strong, nonatomic) NSString *date;
@property (strong, nonatomic) NSURL *url;


// Designated Intializer
- (id) initWithTitle:(NSString *)title;
+ (id) blogPostWithTitle:(NSString *)title;

- (NSURL *)thumbnailURL;
- (NSString *)formattedDate;

@end
