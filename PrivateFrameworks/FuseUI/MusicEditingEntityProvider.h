/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityProviding.h>

@protocol MusicEntityProviding;
@class MusicEntityValueContext, NSMutableArray, NSArray, NSString;

@interface MusicEditingEntityProvider : NSObject <MusicEntityProviding> {

	id<MusicEntityProviding> _baseEntityProvider;
	MusicEntityValueContext* _cachedEntityValueContextForCustomLookup;
	NSMutableArray* _changeRecords;
	vector<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<Music::EditingEntityProviderEntry, std::__1::allocator<Music::EditingEntityProviderEntry> > > > >* _entries;

}

@property (nonatomic,readonly) NSArray * changeRecords; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasEntities;
-(unsigned)numberOfSections;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(char)hasEntitiesNotInLibrary;
-(id)initWithBaseEntityProvider:(id)arg1 ;
-(NSArray *)changeRecords;
-(char)resetToCurrentStateOfBaseEntityProvider;
-(void)resetToOriginalStateReturningDeletedIndexPaths:(id*)arg1 andInsertedIndexPaths:(id*)arg2 ;
-(void)deleteItemAtIndexPath:(id)arg1 ;
-(void)insertEntityValueProvider:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_resetEntityValueContextOutput:(id)arg1 ;
-(void)_configureEntityValueContextOutput:(id)arg1 forEntry:(const EditingEntityProviderEntry*)arg2 ;
-(id)_entityValueProviderForEntry:(const EditingEntityProviderEntry*)arg1 ;
-(void)_registerChangeRecord:(id)arg1 ;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1 ;
@end

