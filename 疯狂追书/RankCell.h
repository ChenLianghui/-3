//
//  RankCell.h
//  疯狂追书
//
//  Created by qianfeng01 on 15-7-19.
//  Copyright (c) 2015年 陈良辉. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RankCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *TagLabel;
- (IBAction)MoreBtn:(UIButton *)sender;
@property (weak, nonatomic) IBOutlet UICollectionView *CollectionView;

@end
