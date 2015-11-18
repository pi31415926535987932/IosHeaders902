/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SLMicroBlogSheetDelegate, SLMicroBlogMentionsDelegate;
@class NSObject, NSArray, NSString, UITableView;

@interface SLMicroBlogMentionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSObject*<SLMicroBlogSheetDelegate> _sheetDelegate;
	NSArray* _mentions;
	NSString* _searchString;
	UITableView* _tableView;
	NSObject*<SLMicroBlogMentionsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<SLMicroBlogMentionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_blankSurrogateProfileImage;
-(id)initWithSheetDelegate:(id)arg1 ;
-(void)updateMentions;
-(void)setMentions:(id)arg1 ;
-(id)mentions;
-(void)completeWithSelectedMention:(id)arg1 ;
-(void)chooseRow:(int)arg1 ;
-(void)setDelegate:(NSObject*<SLMicroBlogMentionsDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(NSObject*<SLMicroBlogMentionsDelegate>)delegate;
-(void)loadView;
-(void)setSearchString:(id)arg1 ;
@end

