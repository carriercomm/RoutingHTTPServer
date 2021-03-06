#import <Foundation/Foundation.h>
#import "RoutingHTTPServer.h"

@interface Route : NSObject

@property (nonatomic) NSRegularExpression *regex;

@property (nonatomic, copy) RequestHandler handler;
@property (nonatomic, copy) RequestHandlerReturn handlerReturn;

#if __has_feature(objc_arc_weak)
@property (nonatomic, weak) id target;
#else
@property (nonatomic, assign) id target;
#endif

@property (nonatomic, assign) SEL selector;
@property (nonatomic) NSArray *keys;
@property (nonatomic) NSArray *requiredParameters;

@end
