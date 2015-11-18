/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UICompletionTablePrivate, NSString;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {

	UICompletionTablePrivate* _private;

}

@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic) UIEdgeInsets scrollIndicatorInsets; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_shadowImage;
+(id)_cellFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(UIEdgeInsets)contentInset;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)scrollIndicatorInsets;
-(id)_completionForRow:(int)arg1 ;
-(void)setTopStrokeColor:(id)arg1 ;
@end

