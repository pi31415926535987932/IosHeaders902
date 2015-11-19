/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASParsing.h>

@protocol ASParsing;
@class NSObject, NSMutableDictionary;

@interface ASItem : NSObject <ASParsing> {

	ASItem* _root;
	ASItem* _parent;
	int _codePage;
	int _token;
	NSObject*<ASParsing> _currentlyParsingSubItem;
	int _currentlyParsingCPTNumber;
	/*^block*/id _currentStreamBlock;
	int _parsingState;
	NSMutableDictionary* _parseRuleUsageNumbers;

}

@property (assign,nonatomic,__weak) ASItem * root;                                      //@synthesize root=_root - In the implementation block
@property (assign,nonatomic,__weak) ASItem * parent;                                    //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) int codePage;                                              //@synthesize codePage=_codePage - In the implementation block
@property (assign,nonatomic) int token;                                                 //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSObject*<ASParsing> currentlyParsingSubItem;              //@synthesize currentlyParsingSubItem=_currentlyParsingSubItem - In the implementation block
@property (assign,nonatomic) int currentlyParsingCPTNumber;                             //@synthesize currentlyParsingCPTNumber=_currentlyParsingCPTNumber - In the implementation block
@property (nonatomic,copy) id currentStreamBlock; 
@property (assign,nonatomic) int parsingState;                                          //@synthesize parsingState=_parsingState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * parseRuleUsageNumbers;               //@synthesize parseRuleUsageNumbers=_parseRuleUsageNumbers - In the implementation block
+(char)expectsContent;
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)parseRuleCache;
+(id)asParseRules;
-(id)init;
-(int)token;
-(void)setToken:(int)arg1 ;
-(int)parsingState;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setCodePage:(int)arg1 ;
-(int)codePage;
-(id)asParseRules;
-(void)ignoreThisContent:(id)arg1 ;
-(void)setParsingState:(int)arg1 ;
-(int)_dataclass;
-(void)setCurrentStreamBlock:(id)arg1 ;
-(/*^block*/id)_copyStreamingBlockForStreamingCallbackDict:(id)arg1 dccpt:(int)arg2 ;
-(int)_streamYourLittleHeartOutWithContext:(id)arg1 ;
-(char)_streamIfNecessaryFromContext:(id)arg1 ;
-(char)_haveEnoughDataToKeepParsingWithContext:(id)arg1 curToken:(unsigned char)arg2 ;
-(char)nextParsedObjectWithContext:(id)arg1 root:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 dataclass:(int)arg5 outParsedObject:(id*)arg6 outCPTNumber:(int*)arg7 account:(id)arg8 ;
-(void)_setCurrentlyParsingSubItem:(id)arg1 ;
-(id)_replacementObjectWithCallbackDict:(id)arg1 ;
-(char)_setupFirstParseWithContext:(id)arg1 root:(id)arg2 parent:(id)arg3 ;
-(char)_parseNextValueWithDataclass:(int)arg1 context:(id)arg2 root:(id)arg3 parent:(id)arg4 callbackDict:(id)arg5 streamCallbackDict:(id)arg6 parseRules:(id)arg7 account:(id)arg8 ;
-(char)_itemPathMatches:(id)arg1 ;
-(char)_itemPathWithDCCPTMatches:(id)arg1 dccpt:(int)arg2 ;
-(id)currentStreamBlock;
-(NSObject*<ASParsing>)currentlyParsingSubItem;
-(void)setCurrentlyParsingSubItem:(NSObject*<ASParsing>)arg1 ;
-(int)currentlyParsingCPTNumber;
-(void)setCurrentlyParsingCPTNumber:(int)arg1 ;
-(NSMutableDictionary *)parseRuleUsageNumbers;
-(void)setParseRuleUsageNumbers:(NSMutableDictionary *)arg1 ;
-(ASItem *)root;
-(ASItem *)parent;
-(void)setParent:(ASItem *)arg1 ;
-(void)setRoot:(ASItem *)arg1 ;
@end

