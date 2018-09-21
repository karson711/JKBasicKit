//
//  TestBoolJudgeViewController.m
//  JKBasicKit
//
//  Created by  kunge on 2018/7/11.
//  Copyright © 2018年 kunge. All rights reserved.
//

#import "TestBoolJudgeViewController.h"
#import "NSString+Emoji.h"

@interface TestBoolJudgeViewController ()

@end

@implementation TestBoolJudgeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    NSLog(@"是否包含Emoji = %@",[NSNumber numberWithBool:[@"fwet😁" isIncludingEmoji]]);
    NSLog(@"是否包含Emoji = %@",[NSNumber numberWithBool:[@"😁" isIncludingEmoji]]);
    NSLog(@"是否是Emoji = %@",[NSNumber numberWithBool:[@"😁" isEmoji]]);
    NSLog(@"是否是Emoji = %@",[NSNumber numberWithBool:[@"j" isEmoji]]);
    NSLog(@"查看Emoji = %@",@"fwet😁");
    NSLog(@"移除Emoji = %@",[@"fwet😁" removedEmojiString]);
    NSLog(@"移除Emoji = %@",[@"fwet" removedEmojiString]);
    NSLog(@"移除Emoji = %@",[@"fwet💕" stringByReplacingEmojiCheatCodesWithUnicode]);
    NSLog(@"文字化Emoji = %@",[@"fwet💕" stringByReplacingEmojiUnicodeWithCheatCodes]);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)dealloc {
    
    NSLog(@"dealloc");
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
