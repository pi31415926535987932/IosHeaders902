/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryAdaptiveViewConfiguration.h>

@class MusicLibraryAlbumsCollectionViewConfiguration;

@interface MusicLibraryAlbumsViewConfiguration : MusicLibraryAdaptiveViewConfiguration {

	MusicLibraryAlbumsCollectionViewConfiguration* _collectionViewConfiguration;
	char _shouldForwardBasePropertyValues;

}
-(void)setIconName:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)entityViewDescriptor;
-(void)addQueryFilterPredicate:(id)arg1 ;
-(int)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4 ;
-(char)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2 ;
-(id)initForMainAlbumsList:(char)arg1 includeCompilations:(char)arg2 ;
-(char)pushAlbumViewWithAlbumPersistentID:(unsigned long long)arg1 fromViewController:(id)arg2 ;
-(id)loadCompactWidthConfiguration;
-(id)loadRegularWidthConfiguration;
@end

