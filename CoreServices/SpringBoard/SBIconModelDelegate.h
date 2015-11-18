/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBIconModelDelegate <NSObject>
@optional
-(char)canSaveIconState:(id)arg1;
-(void)didSaveIconState:(id)arg1;
-(void)didDeleteIconState:(id)arg1;

@required
-(unsigned)maxRowCountForListInRootFolderWithInterfaceOrientation:(int)arg1;
-(unsigned)maxColCountForListInRootFolderWithInterfaceOrientation:(int)arg1;
-(unsigned)maxIconCountForDock;
-(unsigned)maxListCountForFolders;
-(unsigned)maxIconCountForListInFolderClass:(Class)arg1;
-(char)supportsDock;
-(char)canAddWebClip:(id)arg1;
-(char)canAddDownloadingIconForApplication:(id)arg1;

@end

