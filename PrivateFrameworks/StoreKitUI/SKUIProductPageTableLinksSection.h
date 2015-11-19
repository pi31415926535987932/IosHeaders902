/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSMutableArray, SKUIProductPageItem, SKUIColorScheme;

@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection {

	NSMutableArray* _actions;
	SKUIProductPageItem* _item;
	NSMutableArray* _titles;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(int)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 askPermission:(char)arg3 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
@end
