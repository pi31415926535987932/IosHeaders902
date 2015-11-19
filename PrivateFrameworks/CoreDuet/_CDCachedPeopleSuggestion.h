/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings, NSArray;

@interface _CDCachedPeopleSuggestion : NSObject {

	NSDate* _date;
	_CDPeopleSuggesterContext* _context;
	_CDPeopleSuggesterSettings* _settings;
	NSArray* _suggestions;

}

@property (retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (retain) _CDPeopleSuggesterContext * context;                //@synthesize context=_context - In the implementation block
@property (retain) _CDPeopleSuggesterSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (retain) NSArray * suggestions;                              //@synthesize suggestions=_suggestions - In the implementation block
-(_CDPeopleSuggesterSettings *)settings;
-(NSDate *)date;
-(_CDPeopleSuggesterContext *)context;
-(void)setDate:(NSDate *)arg1 ;
-(void)setContext:(_CDPeopleSuggesterContext *)arg1 ;
-(void)setSettings:(_CDPeopleSuggesterSettings *)arg1 ;
-(char)isValidForContext:(id)arg1 settings:(id)arg2 timeoutSeconds:(double)arg3 ;
-(void)setSuggestions:(NSArray *)arg1 ;
-(char)isValidForContext:(id)arg1 ;
-(char)isValidForSettings:(id)arg1 ;
-(NSArray *)suggestions;
@end

