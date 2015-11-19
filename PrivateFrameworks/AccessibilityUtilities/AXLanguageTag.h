/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableOrderedSet, AXDialectMap;

@interface AXLanguageTag : NSObject <NSCopying> {

	char _wasPredicted;
	NSString* _content;
	NSMutableOrderedSet* _unambiguousDialects;
	NSMutableOrderedSet* _ambiguousDialects;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) NSString * content;                                        //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * unambiguousDialects;                 //@synthesize unambiguousDialects=_unambiguousDialects - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * ambiguousDialects;                   //@synthesize ambiguousDialects=_ambiguousDialects - In the implementation block
@property (nonatomic,readonly) AXDialectMap * preferredAmbiguousDialect; 
@property (nonatomic,readonly) AXDialectMap * preferredUnambiguousDialect; 
@property (nonatomic,readonly) NSString * contentSubstring; 
@property (nonatomic,readonly) AXDialectMap * dialect; 
@property (assign,nonatomic) char wasPredicted;                                         //@synthesize wasPredicted=_wasPredicted - In the implementation block
+(id)tagWithDialects:(id)arg1 range:(NSRange)arg2 content:(id)arg3 predictedByTagger:(char)arg4 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(NSString *)content;
-(void)setRange:(NSRange)arg1 ;
-(AXDialectMap *)dialect;
-(char)wasPredicted;
-(char)canBeSpokenByLanguage:(id)arg1 ;
-(NSString *)contentSubstring;
-(void)setWasPredicted:(char)arg1 ;
-(void)addAmbiguousDialect:(id)arg1 ;
-(void)addUnambiguousDialect:(id)arg1 ;
-(NSMutableOrderedSet *)ambiguousDialects;
-(NSMutableOrderedSet *)unambiguousDialects;
-(AXDialectMap *)preferredUnambiguousDialect;
-(AXDialectMap *)preferredAmbiguousDialect;
-(void)setUnambiguousDialects:(NSMutableOrderedSet *)arg1 ;
-(void)setAmbiguousDialects:(NSMutableOrderedSet *)arg1 ;
-(char)canBeSpokenByDialect:(id)arg1 ;
-(char)hasAmbigiousDialects;
-(void)addAmbiguousDialects:(id)arg1 ;
-(void)setContent:(NSString *)arg1 ;
@end
