//
//  LHZuiReViewController.m
//  疯狂追书
//
//  Created by qianfeng01 on 15-7-20.
//  Copyright (c) 2015年 陈良辉. All rights reserved.
//

#import "LHZuiReViewController.h"

@interface LHZuiReViewController ()

@end

@implementation LHZuiReViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    //[self url:@"zhuti_last_seven_days"];
    [self urlWithTag:@"zhuti_last_seven_days" andCategory:@"get_zhuti"];
    [self firstDownload];
    [self creatRefreshView];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
