//
//  ArticleModel.h
//  疯狂追书
//
//  Created by qianfeng01 on 15-7-19.
//  Copyright (c) 2015年 陈良辉. All rights reserved.
//

#import "JSONModel.h"
#import "LHModel.h"
@protocol ArticleModel

@end

@interface ArticleModel : JSONModel
@property (nonatomic,copy)NSString *author;
@property (nonatomic,copy)NSString *comment;
@property (nonatomic,copy)NSString *shortIntro;
@property (nonatomic,copy)NSString *lastChapter;
@property (nonatomic,copy)NSString *book_name;
@property (nonatomic)long update_date;
@property (nonatomic,copy)NSString *zssq_id;
@property (nonatomic,copy)NSString *icon;
@property (nonatomic,copy)NSString *status;
@property (nonatomic)int latelyFollower;
@property (nonatomic)int serializeWordCount;
@property (nonatomic,copy)NSString *type;
@property (nonatomic,assign)long bookid;
@property (nonatomic,copy)NSString *source;
//@property (nonatomic,copy)NSString *bookID;
@end
