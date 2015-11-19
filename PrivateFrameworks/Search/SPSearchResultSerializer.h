/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface SPSearchResultSerializer : NSObject {

	unsigned _byteVector;
	unsigned _byteVectorCnt;
	unsigned _byteVectorCapacity;
	NSMutableArray* _sections;
	Class _lastResultClass;
	char _respondsToTitleUTF8String;
	char _respondsToSubtitleUTF8String;
	char _respondsToAuxiliaryTitleUTF8String;
	char _respondsToAuxiliarySubtitleUTF8String;
	char _respondsToSummaryUTF8String;
	char _respondsToIdentifier;
	char _respondsToURL;
	char _respondsToBadgeValue;
	char _inProc;
	char _completed;
	char _forForwarding;

}

@property (nonatomic,readonly) char completed;              //@synthesize completed=_completed - In the implementation block
-(char)completed;
-(void)dealloc;
-(id)init;
-(void)serialize;
-(unsigned)sectionCount;
-(id)initWithInitialCapacity:(unsigned)arg1 inProc:(char)arg2 ;
-(unsigned)_allocateSize:(unsigned)arg1 ;
-(id)_convertConformingResult:(id)arg1 ;
-(char)lockedAppendResult:(id)arg1 toSection:(id)arg2 ;
-(id)initWithInitialCapacity:(unsigned)arg1 ;
-(char)appendSerializer:(id)arg1 ;
-(id)getSections;
-(char)appendSection:(id)arg1 ;
-(char)appendResult:(id)arg1 ;
-(unsigned)byteVectorCount;
-(unsigned)byteVector;
@end

