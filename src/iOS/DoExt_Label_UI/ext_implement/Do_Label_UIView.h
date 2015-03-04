//
//  TYPEID_View.h
//  DoExt_UI
//
//  Created by @userName on @time.
//  Copyright (c) 2015年 DoExt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Do_Label_IView.h"
#import "Do_Label_UIModel.h"
#import "doIUIModuleView.h"

@interface Do_Label_View : UILabel<Do_Label_IView,doIUIModuleView>
//可根据具体实现替换UIView
{
    @private
    __weak Do_Label_UIModel *_model;
}

@end
