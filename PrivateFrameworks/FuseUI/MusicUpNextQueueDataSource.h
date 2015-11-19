/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicUpNextCompositeDataSource.h>
#import <libobjc.A.dylib/MusicActionableHeaderViewDelegate.h>
#import <libobjc.A.dylib/MusicMediaPickerDelegate.h>
#import <libobjc.A.dylib/MusicUpNextSectionHeaderDelegate.h>

@class MusicEntityViewHorizontalLockupContentDescriptor, NSString;

@interface MusicUpNextQueueDataSource : MusicUpNextCompositeDataSource <MusicActionableHeaderViewDelegate, MusicMediaPickerDelegate, MusicUpNextSectionHeaderDelegate> {

	NSRange _hardQueueRange;
	NSRange _softQueueRange;
	char _showsRadioQueue;
	char _ignoreQueueChanges;
	MusicEntityViewHorizontalLockupContentDescriptor* _horizontalLockupContentDescriptor;
	MusicEntityViewHorizontalLockupContentDescriptor* _radioStationHorizontalLockupContentDescriptor;

}

@property (nonatomic,readonly) MusicEntityViewHorizontalLockupContentDescriptor * radioStationHorizontalLockupContentDescriptor;              //@synthesize radioStationHorizontalLockupContentDescriptor=_radioStationHorizontalLockupContentDescriptor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_unregisterForPlayerNotifications:(id)arg1 ;
-(void)_registerForPlayerNotifications:(id)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(unsigned)numberOfSections;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(Class)tableViewCellClass;
-(void)mediaPickerNavigationController:(id)arg1 didFinishWithSelectedEntities:(id)arg2 ;
-(id)horizontalLockupContentDescriptorForIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)horizontalLockupContentDescriptor;
-(id)updatesForPlayerChangedFromItem:(id)arg1 toItem:(id)arg2 ;
-(void)_currentItemWillChange:(id)arg1 ;
-(void)_currentItemDidChange:(id)arg1 ;
-(void)addButtonPressedForSectionHeader:(id)arg1 ;
-(void)clearButtonPressedForSectionHeader:(id)arg1 ;
-(NSRange)_hardQueueRangeForPlaylistMananger:(id)arg1 ;
-(NSRange)_softQueueRangeForPlaylistMananger:(id)arg1 ;
-(id)_indexPathsForSection:(int)arg1 ;
-(void)_clearHardQueue;
-(void)_clearSoftQueue;
-(void)_dismissPicker;
-(char)_canMoveItemAtIndexPath:(id)arg1 ;
-(char)_sectionIsHardQueueSection:(int)arg1 ;
-(char)_displayHeaderForSection:(unsigned)arg1 ;
-(char)_displayAddButtonForSection:(unsigned)arg1 ;
-(char)_displayClearButtonForSection:(unsigned)arg1 ;
-(char)_softQueueIsRadioQueue;
-(void)_queueContentsDidChange:(id)arg1 ;
-(MusicEntityViewHorizontalLockupContentDescriptor *)radioStationHorizontalLockupContentDescriptor;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
@end

