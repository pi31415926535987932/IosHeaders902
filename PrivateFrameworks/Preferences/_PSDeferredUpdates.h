/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, PSSpecifierUpdates;

@interface _PSDeferredUpdates : NSObject {

	char _invalidatedSpecifiers;
	NSMutableSet* _searchEntries;
	PSSpecifierUpdates* _specifierUpdates;

}

@property (nonatomic,retain) NSMutableSet * searchEntries;                       //@synthesize searchEntries=_searchEntries - In the implementation block
@property (nonatomic,retain) PSSpecifierUpdates * specifierUpdates;              //@synthesize specifierUpdates=_specifierUpdates - In the implementation block
@property (assign,nonatomic) char invalidatedSpecifiers;                         //@synthesize invalidatedSpecifiers=_invalidatedSpecifiers - In the implementation block
+(id)deferredUpdatesWithEntries:(id)arg1 specifierUpdates:(id)arg2 ;
+(id)deferredInvalidationUpdatesWithEntries:(id)arg1 ;
-(id)initWithSearchEntries:(id)arg1 specifierUpdates:(id)arg2 invalidatedSpecifiers:(char)arg3 ;
-(NSMutableSet *)searchEntries;
-(void)setSearchEntries:(NSMutableSet *)arg1 ;
-(PSSpecifierUpdates *)specifierUpdates;
-(void)setSpecifierUpdates:(PSSpecifierUpdates *)arg1 ;
-(char)invalidatedSpecifiers;
-(void)setInvalidatedSpecifiers:(char)arg1 ;
@end

