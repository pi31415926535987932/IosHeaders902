/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString;

@interface WKOverflowScrollViewDelegate : NSObject <UIScrollViewDelegate> {

	ScrollingTreeOverflowScrollingNodeIOS* _scrollingTreeNode;
	char _inUserInteraction;

}

@property (assign,getter=_isInUserInteraction,nonatomic) char inUserInteraction;              //@synthesize inUserInteraction=_inUserInteraction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithScrollingTreeNode:(ScrollingTreeOverflowScrollingNodeIOS*)arg1 ;
-(char)_isInUserInteraction;
-(void)setInUserInteraction:(char)arg1 ;
@end
