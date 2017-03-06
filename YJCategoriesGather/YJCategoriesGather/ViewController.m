//
//  ViewController.m
//  YJCategoriesGather
//
//  Created by YJHou on 2014/11/4.
//  Copyright © 2014年 侯跃军 houmanager@Hotmail.com. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@property (nonatomic, strong) UIView *showView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor cyanColor];
    [self setUpMainView];
}

- (void)setUpMainView{
    
    [self.view addSubview:self.showView];
    
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    [self.showView yj_rotateClockwise:NO duration:0.1];

}

#pragma mark - Lazy
- (UIView *)showView{
    if (!_showView) {
        _showView = [[UIView alloc] initWithFrame:CGRectMake(30, 100, 100, 100)];
        _showView.backgroundColor = [UIColor redColor];
//        [_showView yj_cornerRadius:50 color:[UIColor greenColor] borderWidth:1];
        
//        UIView *nodeView = [[UIView alloc] initWithFrame:CGRectMake(20, 20, 10, 10)];
//        nodeView.backgroundColor = [UIColor blackColor];
//        [nodeView yj_cornerRadius:5 color:nil borderWidth:0];
//        [_showView addSubview:nodeView];
    }
    return _showView;
}




@end
