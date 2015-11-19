/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray;

@interface PLPhotoEditAggregateSession : NSObject {

	char _toggledOriginal;
	char _pluginStarted;
	char _pluginSaved;
	char __hasCropSuggestion;
	char __autoCropAdjusted;
	char __autoCropReset;

}

@property (assign,nonatomic) char toggledOriginal;                                               //@synthesize toggledOriginal=_toggledOriginal - In the implementation block
@property (assign,nonatomic) char pluginStarted;                                                 //@synthesize pluginStarted=_pluginStarted - In the implementation block
@property (assign,nonatomic) char pluginSaved;                                                   //@synthesize pluginSaved=_pluginSaved - In the implementation block
@property (nonatomic,readonly) NSArray * _autoCropKeys; 
@property (assign,setter=_setHasCropSuggestion:,nonatomic) char _hasCropSuggestion;              //@synthesize _hasCropSuggestion=__hasCropSuggestion - In the implementation block
@property (assign,setter=_setAutoCropAdjusted:,nonatomic) char _autoCropAdjusted;                //@synthesize _autoCropAdjusted=__autoCropAdjusted - In the implementation block
@property (assign,setter=_setAutoCropReset:,nonatomic) char _autoCropReset;                      //@synthesize _autoCropReset=__autoCropReset - In the implementation block
+(CFStringRef)_keyForSessionEnd:(int)arg1 ;
-(void)setToggledOriginal:(char)arg1 ;
-(void)finishSessionWithEnd:(int)arg1 ;
-(void)setPluginSaved:(char)arg1 ;
-(void)finishSessionWithEnd:(int)arg1 newEditModel:(id)arg2 oldEditModel:(id)arg3 ;
-(void)setPluginStarted:(char)arg1 ;
-(void)notifyDidResetCrop;
-(char)_hasCropSuggestion;
-(void)notifyDidApplyAutoCrop;
-(void)notifyDidAdjustCrop;
-(void)_setHasCropSuggestion:(char)arg1 ;
-(void)_setAutoCropAdjusted:(char)arg1 ;
-(void)_setAutoCropReset:(char)arg1 ;
-(char)_autoCropReset;
-(char)_autoCropAdjusted;
-(NSArray *)_autoCropKeys;
-(char)toggledOriginal;
-(char)pluginStarted;
-(char)pluginSaved;
-(id)_sessionKeysWithEnd:(int)arg1 ;
-(void)_recordKeys:(id)arg1 ;
@end

