//
//  AllMyWindowVC.h
//  if_wapeng
//
//  Created by 心 猿 on 14-9-15.
//  Copyright (c) 2014年 funeral. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AllMyWindowVC : UIViewController<UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray * _dataArray;
}
@property (nonatomic, strong)UITableView * tableView;
@end
